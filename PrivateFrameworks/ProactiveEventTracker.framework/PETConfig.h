
@interface PETConfig : NSObject {
    NSDictionary * _configDictionary;
    NSDictionary * _messageGroups;
    unsigned long long  _version;
}

@property (readonly) NSDictionary *configDictionary;
@property (readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)_configForMessageName:(id)arg1;
- (void)_enumerateGroupConfigsWithBlock:(id /* block */)arg1;
- (id)_groupConfigForMessageName:(id)arg1;
- (id)_nestedFieldsHelper:(id)arg1;
- (id)_whitelistHelper:(id)arg1;
- (id)bucketsForMessageName:(id)arg1;
- (id)configDictionary;
- (double)deviceSamplingForMessageName:(id)arg1 isSeed:(bool)arg2;
- (id)groupForMessageName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFile:(id)arg1;
- (bool)isAggregatedForMessageName:(id)arg1;
- (bool)isChinaEnabledForMessageName:(id)arg1 messageGroup:(id)arg2;
- (bool)isTVOSEnabledForMessageName:(id)arg1 messageGroup:(id)arg2;
- (double)messageSamplingForMessageName:(id)arg1 isSeed:(bool)arg2;
- (id)nestedFieldsForMessageName:(id)arg1;
- (unsigned long long)samplingLimitForMessageGroup:(id)arg1;
- (bool)shouldUploadToFBFv2;
- (bool)shouldUploadToFBFv2ForCarryAndSeed;
- (bool)shouldUploadToParsec;
- (unsigned long long)sigFigsForMessageName:(id)arg1;
- (unsigned long long)version;
- (id)whitelistForMessageName:(id)arg1;
- (void)writeToFile:(id)arg1;

@end
