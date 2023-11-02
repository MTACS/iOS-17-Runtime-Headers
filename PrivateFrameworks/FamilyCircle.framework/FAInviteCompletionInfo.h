
@interface FAInviteCompletionInfo : NSObject <NSSecureCoding> {
    NSArray * _recipients;
    unsigned long long  _status;
    unsigned long long  _transportType;
}

@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long transportType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_completionStatusStringValue;
- (id)_transportStringValue;
- (unsigned long long)completionTypeFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recipients;
- (id)serverReadableDictionary;
- (void)setRecipients:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (unsigned long long)status;
- (unsigned long long)transportType;
- (unsigned long long)transportTypeFrom:(id)arg1;

@end
