
@interface TPSEventProviderResult : NSObject {
    id  _bookmark;
    NSString * _identifier;
    NSDictionary * _observationMap;
    NSDate * _resultDate;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) id bookmark;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *observationMap;
@property (nonatomic, retain) NSDate *resultDate;
@property (nonatomic, retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)bookmark;
- (id)debugDescription;
- (id)identifier;
- (id)observationMap;
- (id)resultDate;
- (void)setBookmark:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObservationMap:(id)arg1;
- (void)setResultDate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
