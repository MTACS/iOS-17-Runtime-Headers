
@interface NWCSimpleEntryModel : NSObject <NSSecureCoding> {
    NSArray * _hourlyEntryModels;
}

@property (readonly) NSArray *hourlyEntryModels;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hourlyEntryModels;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1;

@end
