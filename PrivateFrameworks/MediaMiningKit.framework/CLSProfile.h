
@interface CLSProfile : NSObject {
    NSString * _uuid;
}

@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)classIdentifier;
+ (id)identifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(id /* block */)arg2;
- (id)uniqueIdentifier;
- (id)uuid;

@end
