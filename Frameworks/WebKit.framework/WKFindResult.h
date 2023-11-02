
@interface WKFindResult : NSObject <NSCopying> {
    bool  _matchFound;
}

@property (nonatomic, readonly) bool matchFound;

- (id)_initWithMatchFound:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)matchFound;

@end
