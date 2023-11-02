
@interface HDFHIRJSONObject : NSObject <NSCopying, NSSecureCoding> {
    HKFHIRVersion * _FHIRVersion;
    NSDictionary * _JSONObject;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly, copy) HKFHIRVersion *FHIRVersion;
@property (nonatomic, readonly, copy) NSDictionary *JSONObject;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *detectedResourceType;
@property (nonatomic, readonly, copy) NSString *sourceString;
@property (nonatomic, readonly, copy) NSURL *sourceURL;
@property (nonatomic, readonly, copy) NSData *uniquenessChecksum;

+ (id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2;
+ (id)objectWithResourceData:(id)arg1 error:(id*)arg2;
+ (id)resourceTypeOfJSONObject:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)FHIRVersion;
- (id)JSONObject;
- (id)_dataWithJSONOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)detectedResourceType;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCode:(id)arg1 codeSystem:(id)arg2 codeableConcept:(id)arg3 error:(id*)arg4;
- (bool)hasCode:(id)arg1 codeSystem:(id)arg2 codings:(id)arg3 error:(id*)arg4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3;
- (bool)isClinicalNoteRecord;
- (bool)isDiagnosticTestReport;
- (bool)isDocumentReference;
- (bool)isEqual:(id)arg1;
- (id)sourceString;
- (id)sourceURL;
- (id)uniquenessChecksum;

@end
