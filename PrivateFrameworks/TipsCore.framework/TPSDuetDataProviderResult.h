
@interface TPSDuetDataProviderResult : NSObject {
    _DKEvent * _event;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) double creationDelay;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) _DKEvent *event;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (getter=isRemoteEvent, nonatomic, readonly) bool remoteEvent;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)creationDate;
- (double)creationDelay;
- (id)debugDescription;
- (id)description;
- (id)endDate;
- (id)event;
- (id)identifier;
- (bool)isRemoteEvent;
- (id)localCreationDate;
- (void)setEvent:(id)arg1;
- (id)startDate;

@end
