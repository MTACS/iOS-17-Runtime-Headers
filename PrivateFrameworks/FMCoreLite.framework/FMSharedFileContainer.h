
@interface FMSharedFileContainer : NSObject <FMFileContainer> {
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)groupContainerURLWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
