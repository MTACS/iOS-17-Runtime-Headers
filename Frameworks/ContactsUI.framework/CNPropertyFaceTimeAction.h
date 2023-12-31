
@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate> {
    CNPropertyBestIDSValueQuery * _bestFaceTimeQuery;
    long long  _type;
}

@property (nonatomic, retain) CNPropertyBestIDSValueQuery *bestFaceTimeQuery;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)_queryFaceTimeStatus;
- (id)bestFaceTimeQuery;
- (bool)canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)queryComplete;
- (void)setBestFaceTimeQuery:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
