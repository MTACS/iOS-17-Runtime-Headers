
@interface IAMTempTestMessages : NSObject {
    ICInAppMessageEntry * _messageEntry;
}

@property (nonatomic, retain) ICInAppMessageEntry *messageEntry;

- (void).cxx_destruct;
- (id)initWithDisplayType:(long long)arg1;
- (id)messageEntry;
- (void)setMessageEntry:(id)arg1;

@end
