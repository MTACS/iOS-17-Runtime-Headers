
@interface _UIIdentifierDifferMovePair : NSObject <NSCopying, _UIIdentifierDifferMovePair> {
    long long  _fromIndex;
    long long  _toIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long fromIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long toIndex;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)fromIndex;
- (unsigned long long)hash;
- (id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setFromIndex:(long long)arg1;
- (void)setToIndex:(long long)arg1;
- (long long)toIndex;

@end
