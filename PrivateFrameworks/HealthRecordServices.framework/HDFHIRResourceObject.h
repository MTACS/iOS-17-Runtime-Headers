
@interface HDFHIRResourceObject : HDFHIRJSONObject {
    unsigned long long  _extractionHints;
    HKFHIRIdentifier * _identifier;
    NSDate * _receivedDate;
}

@property (nonatomic, readonly) unsigned long long extractionHints;
@property (nonatomic, readonly, copy) HKFHIRIdentifier *identifier;
@property (nonatomic, readonly, copy) NSDate *receivedDate;
@property (nonatomic, readonly, copy) NSURL *serverBaseURL;

+ (id)hrs_sampleResourceObjectWithFHIRResource:(id)arg1;
+ (id)hrs_sampleResourceObjectWithFHIRResource:(id)arg1 error:(id*)arg2;
+ (id)identifierDetectedInJSONObject:(id)arg1 error:(id*)arg2;
+ (id)identifierWithStaticIdentifier:(id)arg1 JSONObject:(id)arg2 error:(id*)arg3;
+ (id)resourceObjectWithJSONObject:(id)arg1 serverBaseURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 error:(id*)arg5;
+ (id)resourceObjectWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 error:(id*)arg6;
+ (id)resourceObjectWithResourceData:(id)arg1 receivedDate:(id)arg2 extractionHints:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6;
- (id)copyAsOriginalResourceObjectWithFirstSeenDate:(id)arg1 originInformation:(id)arg2 existingRowID:(id)arg3 ingestedOnLocalDevice:(bool)arg4 country:(id)arg5;
- (id)copyWithOriginDataFrom:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extractionHints;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)receivedDate;
- (id)serverBaseURL;

@end
