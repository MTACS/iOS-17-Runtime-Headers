
@interface WBSSearchSuggestionsFetcherResponse : NSObject <NSSecureCoding> {
    long long  _sizeInBytes;
    long long  _statusCode;
    NSArray * _suggestions;
    NSDictionary * _timingData;
}

@property (nonatomic, readonly) long long sizeInBytes;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly, copy) NSArray *suggestions;
@property (nonatomic, readonly, copy) NSDictionary *timingData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestions:(id)arg1 sizeInBytes:(long long)arg2 statusCode:(long long)arg3 timingData:(id)arg4;
- (long long)sizeInBytes;
- (long long)statusCode;
- (id)suggestions;
- (id)timingData;

@end
