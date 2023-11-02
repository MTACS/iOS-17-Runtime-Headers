
@interface ACHEarnedInstanceDuplicateUtility : NSObject {
    NSCalendar * _gregorianCalendar;
    ACHTemplateStore * _templateStore;
}

@property (nonatomic, retain) NSCalendar *gregorianCalendar;
@property (nonatomic) ACHTemplateStore *templateStore;

- (void).cxx_destruct;
- (id)earnedInstancesLimitedByEarnLimit:(id)arg1;
- (id)earnedInstancesWithoutDuplicates:(id)arg1;
- (id)gregorianCalendar;
- (id)initWithTemplateStore:(id)arg1;
- (void)setGregorianCalendar:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (id)templateStore;

@end
