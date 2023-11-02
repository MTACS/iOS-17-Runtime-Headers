
@interface WFExtensionEnumerator : NSObject {
    NSString * _extensionPointIdentifier;
    int  _lsToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _pkToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _supportedApplicationRecords;
}

@property (nonatomic, readonly) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) NSSet *supportedApplicationRecords;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateExtensions;
- (id)extensionPointIdentifier;
- (id)initWithExtensionPointIdentifier:(id)arg1;
- (id)supportedApplicationRecords;

@end
