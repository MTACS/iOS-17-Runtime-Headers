
@interface WPResourceRequestOptions : NSObject {
    bool  _afterUpdates;
}

@property (nonatomic) bool afterUpdates;

- (bool)afterUpdates;
- (void)setAfterUpdates:(bool)arg1;

@end
