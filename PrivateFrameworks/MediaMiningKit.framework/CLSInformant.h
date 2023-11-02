
@interface CLSInformant : NSObject {
    NSString * _uuid;
}

@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)identifier;
+ (id)informantDependenciesIdentifiers;
+ (id)supportedOutputClueKeys;

- (void).cxx_destruct;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)init;
- (id)uniqueIdentifier;
- (id)uuid;

@end
