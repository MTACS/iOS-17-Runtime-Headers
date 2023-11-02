
@interface WKFindConfiguration : NSObject <NSCopying> {
    bool  _backwards;
    bool  _caseSensitive;
    bool  _wraps;
}

@property (nonatomic) bool backwards;
@property (nonatomic) bool caseSensitive;
@property (nonatomic) bool wraps;

- (bool)backwards;
- (bool)caseSensitive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setBackwards:(bool)arg1;
- (void)setCaseSensitive:(bool)arg1;
- (void)setWraps:(bool)arg1;
- (bool)wraps;

@end
