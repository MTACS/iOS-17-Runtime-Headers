
@interface IPAAutoSettings : NSObject <IPAAutoSettings> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool pending;
@property (readonly) Class superclass;

+ (id)pendingWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;
- (bool)applyArchiveDictionary:(id)arg1;
- (id)archiveDictionary;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutoSettings:(id)arg1;
- (bool)pending;

@end
