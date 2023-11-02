
@interface MRCompanionLinkClientRequest : MRCompanionLinkClientEvent {
    id /* block */  _callback;
    NSDate * _date;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSDate *date;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)date;
- (void)setCallback:(id /* block */)arg1;
- (void)setDate:(id)arg1;

@end
