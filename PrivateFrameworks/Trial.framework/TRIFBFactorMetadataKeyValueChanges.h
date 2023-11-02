
@interface TRIFBFactorMetadataKeyValueChanges : NSObject {
    unsigned char  _changeTypeKey;
    unsigned char  _changeTypeVal;
    unsigned int  _replacementKey;
    unsigned int  _replacementVal;
}

- (void)preserveKey;
- (void)preserveVal;
- (void)replaceKey:(id)arg1;
- (void)replaceVal:(id)arg1;

@end
