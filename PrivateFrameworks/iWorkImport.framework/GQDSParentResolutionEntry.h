
@interface GQDSParentResolutionEntry : NSObject {
    char * mParentIdentifier;
    GQDSStyle * mStyle;
}

- (void)dealloc;
- (id)initWithStyle:(id)arg1 parentIdentifier:(const char *)arg2;
- (const char *)parentIdentifier;
- (id)style;

@end
