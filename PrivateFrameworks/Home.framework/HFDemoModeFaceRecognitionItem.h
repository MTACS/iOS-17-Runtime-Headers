
@interface HFDemoModeFaceRecognitionItem : HFItem <HFPersonLikeItem, NSCopying> {
    HFDemoModeFaceRecognitionRecentsData * _demoRecentsEntry;
    HMHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) HFDemoModeFaceRecognitionRecentsData *demoRecentsEntry;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) HMPerson *person;
@property (nonatomic, readonly) HMPersonManager *personManager;
@property (readonly) Class superclass;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)demoRecentsEntry;
- (id)home;
- (id)init;
- (id)initWithRecentsData:(id)arg1 home:(id)arg2;
- (id)person;
- (id)personManager;
- (void)setDemoRecentsEntry:(id)arg1;

@end
