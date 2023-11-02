
@interface TLToneImportResponse : NSObject {
    long long  _statusCode;
    NSString * _toneIdentifier;
}

@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSString *toneIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2;
- (long long)statusCode;
- (id)toneIdentifier;

@end
