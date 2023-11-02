
@interface _NWAdvertiser : NSObject {
    NSObject<OS_nw_advertise_descriptor> * advertise;
    NSArray * children;
    struct _DNSServiceRef_t { } * dnsref;
    NSObject<OS_nw_path_evaluator> * evaluator;
    NSObject<OS_nw_dictionary> * flow_registrations;
    NWConcrete_nw_listener * listener;
    NSObject<OS_nw_parameters> * parameters;
    _NWAdvertiser * parent;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
