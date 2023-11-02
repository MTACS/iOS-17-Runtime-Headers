
@interface DSProviderDevice : DSRapportDevice {
    bool  _isResponsePending;
}

@property bool isResponsePending;

- (id)initWithRapportDevice:(id)arg1 queue:(id)arg2;
- (bool)isResponsePending;
- (void)setIsResponsePending:(bool)arg1;

@end
