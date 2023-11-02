
@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject {
    NSString * _country;
    NSNumber * _existingRowID;
    NSDate * _firstSeenDate;
    bool  _ingestedOnLocalDevice;
    HDHRSOriginInformation * _originInformation;
    NSData * _staticUniquenessChecksum;
}

@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly, copy) NSNumber *existingRowID;
@property (nonatomic, readonly, copy) NSDate *firstSeenDate;
@property (nonatomic, readonly) bool ingestedOnLocalDevice;
@property (nonatomic, readonly, copy) HDHRSOriginInformation *originInformation;

+ (id)resourceObjectWithData:(id)arg1 uniquenessChecksum:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 firstSeenDate:(id)arg6 extractionHints:(unsigned long long)arg7 originVersion:(struct { long long x1; long long x2; long long x3; })arg8 originBuild:(id)arg9 country:(id)arg10 existingROWID:(id)arg11 ingestedOnLocalDevice:(bool)arg12 error:(id*)arg13;
+ (id)resourceObjectWithStaticIdentifier:(id)arg1 data:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 firstSeenDate:(id)arg6 extractionHints:(unsigned long long)arg7 originVersion:(struct { long long x1; long long x2; long long x3; })arg8 originBuild:(id)arg9 country:(id)arg10 error:(id*)arg11;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 uniquenessChecksum:(id)arg3 sourceURL:(id)arg4 FHIRVersion:(id)arg5 receivedDate:(id)arg6 firstSeenDate:(id)arg7 extractionHints:(unsigned long long)arg8 originInformation:(id)arg9 existingROWID:(id)arg10 ingestedOnLocalDevice:(bool)arg11 country:(id)arg12;
- (id)copyWithAlteredData:(id)arg1 error:(id*)arg2;
- (id)country;
- (void)encodeWithCoder:(id)arg1;
- (id)existingRowID;
- (id)firstSeenDate;
- (unsigned long long)hash;
- (bool)ingestedOnLocalDevice;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceData:(id)arg1 receivedDate:(id)arg2 firstSeenDate:(id)arg3 extractionHints:(unsigned long long)arg4 originInformation:(id)arg5 country:(id)arg6 existingROWID:(id)arg7 ingestedOnLocalDevice:(bool)arg8 error:(id*)arg9;
- (bool)isEqual:(id)arg1;
- (id)originInformation;
- (id)uniquenessChecksum;

@end
