
@interface CalDAVReportJunkAction : NSObject <CoreDAVChangeContextHolding> {
    id  _changeContext;
    NSURL * _resourceURL;
}

@property (nonatomic, retain) id changeContext;
@property (nonatomic, readonly) NSURL *resourceURL;

- (void).cxx_destruct;
- (id)changeContext;
- (id)initWithResourceURL:(id)arg1;
- (id)resourceURL;
- (void)setChangeContext:(id)arg1;

@end
