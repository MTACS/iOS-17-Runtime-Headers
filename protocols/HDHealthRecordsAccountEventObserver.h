
@protocol HDHealthRecordsAccountEventObserver <NSObject>

@required

- (void)profileExtension:(id <HDHealthRecordsProfileExtension>)arg1 accountEventOccurred:(unsigned long long)arg2;

@end
