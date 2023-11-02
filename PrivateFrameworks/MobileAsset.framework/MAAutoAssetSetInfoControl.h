
@interface MAAutoAssetSetInfoControl : NSObject <NSSecureCoding> {
    bool  _clearingAfter;
    NSArray * _limitedToClientDomains;
    NSArray * _limitedToSetIdentifiers;
}

@property (nonatomic, readonly) bool clearingAfter;
@property (nonatomic, readonly, retain) NSArray *limitedToClientDomains;
@property (nonatomic, readonly, retain) NSArray *limitedToSetIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_arrayStringsToString:(id)arg1;
- (bool)clearingAfter;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initClearingAfter:(bool)arg1;
- (id)initClearingAfter:(bool)arg1 limitedToClientDomains:(id)arg2;
- (id)initClearingAfter:(bool)arg1 limitedToClientDomains:(id)arg2 limitedToSetIdentifiers:(id)arg3;
- (id)initClearingAfter:(bool)arg1 limitedToSetIdentifiers:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)limitedToClientDomains;
- (id)limitedToSetIdentifiers;
- (id)summary;

@end
