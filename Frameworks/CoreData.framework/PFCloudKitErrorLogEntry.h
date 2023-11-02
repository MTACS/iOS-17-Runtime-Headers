
@interface PFCloudKitErrorLogEntry : NSObject {
    NSString * _annotation;
    NSError * _error;
}

- (void)dealloc;
- (id)initWithError:(id)arg1 annotation:(id)arg2;

@end
