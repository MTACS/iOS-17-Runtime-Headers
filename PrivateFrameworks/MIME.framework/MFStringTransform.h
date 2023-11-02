
@interface MFStringTransform : NSObject {
    void ** _underlying;
}

+ (id)identityTransform;

- (id)_init;
- (void)dealloc;
- (id)init;
- (id)initWithSoftBankHexData:(id)arg1;

@end
