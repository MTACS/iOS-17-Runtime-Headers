
@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {
    TSWPChange * _change;
    NSString * mChangeString;
    <TSKModel> * model;
}

@property (nonatomic, readonly) int annotationDisplayStringType;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, retain) TSWPChange *change;
@property (nonatomic, readonly) NSString *changeTrackingString;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <TSKModel> *model;
@property (nonatomic, copy) TSDCommentStorage *storage;
@property (readonly) Class superclass;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (id)change;
- (id)changeTrackingString;
- (void)commitText:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)initWithChange:(id)arg1 changeString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChangeDetails:(id)arg1;
- (id)model;
- (void)setAuthor:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setModel:(id)arg1;

@end
