
@interface ICSharedListeningConnectionReport : NSObject <MSVQRConnectionReportProtocol> {
    NSMapTable * _allEvents;
    NSString * _groupSessionIdentifier;
    NSString * _sharedListeningSessionIdentifier;
    NSMutableArray * _topLevelEvents;
}

@property (nonatomic, retain) NSMapTable *allEvents;
@property (nonatomic, readonly) id analyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedReport;
@property (nonatomic, copy) NSString *groupSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sharedListeningSessionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *topLevelEvents;

- (void).cxx_destruct;
- (void)_addEvents:(id)arg1 toReportString:(id)arg2 eventLevel:(long long)arg3;
- (id)allEvents;
- (id)analyticsPayload;
- (void)endEvent:(id)arg1;
- (void)endEvent:(id)arg1 withError:(id)arg2;
- (id)formattedReport;
- (id)groupSessionIdentifier;
- (id)init;
- (void)setAllEvents:(id)arg1;
- (void)setGroupSessionIdentifier:(id)arg1;
- (void)setSharedListeningSessionIdentifier:(id)arg1;
- (void)setTopLevelEvents:(id)arg1;
- (id)sharedListeningSessionIdentifier;
- (void)startEvent:(id)arg1;
- (void)startEvent:(id)arg1 withParentEvent:(id)arg2;
- (id)topLevelEvents;

@end
