
@interface IndexMove : NSObject {
    long long  _indexAfterMove;
    long long  _indexBeforeMove;
    bool  _modified;
}

@property (nonatomic, readonly) long long indexAfterMove;
@property (nonatomic, readonly) long long indexBeforeMove;
@property (getter=isModified, nonatomic, readonly) bool modified;

- (id)description;
- (unsigned long long)hash;
- (long long)indexAfterMove;
- (long long)indexBeforeMove;
- (id)initWithIndexBeforeMove:(long long)arg1 indexAfterMove:(long long)arg2 modified:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMove:(id)arg1;
- (bool)isModified;

@end
