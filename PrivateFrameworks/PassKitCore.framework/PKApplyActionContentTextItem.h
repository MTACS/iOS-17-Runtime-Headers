
@interface PKApplyActionContentTextItem : NSObject <NSCopying, PKApplyODIAttributesDictionaryProtocol, PKIdentifiable> {
    NSString * _analyticsIdentifier;
    NSArray * _odiDetails;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *analyticsIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly, copy) NSArray *odiDetails;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)odiAttributesDictionary;
- (id)odiDetails;
- (void)setAnalyticsIdentifier:(id)arg1;
- (id)subtitle;
- (id)title;

@end
