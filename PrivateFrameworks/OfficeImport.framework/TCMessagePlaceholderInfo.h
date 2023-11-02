
@interface TCMessagePlaceholderInfo : NSObject {
    bool  mInUse;
    id  mKey;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isInUse;
- (id)key;
- (void)setInUse:(bool)arg1;

@end
