
@interface AAInviteCompletionInfo : NSObject {
    NSArray * _recipients;
    unsigned long long  _status;
    unsigned long long  _transportType;
}

@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long transportType;

- (void).cxx_destruct;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)status;
- (unsigned long long)transportType;

@end
