
@protocol PKContactlessCardIngesterDelegate <NSObject>

@required

- (void)contactlessCardIngester:(PKContactlessCardIngester *)arg1 didFailToIngestCardWithError:(NSError *)arg2 resetProvisioning:(bool)arg3 isRecoverable:(bool)arg4;
- (void)contactlessCardIngester:(PKContactlessCardIngester *)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2;

@end
