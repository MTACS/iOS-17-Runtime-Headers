
@interface WLAutomation : NSObject {
    bool  _hasTestAutomationCaches;
}

- (void)deleteTestAutomationCachesIfNeeded;
- (void)writeCodeForTestAutomationIfNeeded:(id)arg1;

@end
