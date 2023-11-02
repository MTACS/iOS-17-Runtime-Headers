
@interface NWConcrete_nw_error : NSObject <OS_nw_error> {
    int  code;
    int  domain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;

@end
