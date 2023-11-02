
@interface CIDVUIBindingDetails : NSObject {
    NSArray * _passDescriptions;
    NSArray * _templateUUIDs;
}

@property (nonatomic, retain) NSArray *passDescriptions;
@property (nonatomic, retain) NSArray *templateUUIDs;

- (void).cxx_destruct;
- (id)passDescriptions;
- (void)setPassDescriptions:(id)arg1;
- (void)setTemplateUUIDs:(id)arg1;
- (id)templateUUIDs;

@end
