
@interface SportsKit.SportingEvent : NSObject {
    void _competitors;
    void _coverage;
    void _plays;
    void _tournament;
    void canonicalId;
    void clock;
    void progressStatus;
    void version;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;

@end
