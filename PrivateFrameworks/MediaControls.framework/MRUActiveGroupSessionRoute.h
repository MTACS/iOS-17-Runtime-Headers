
@interface MRUActiveGroupSessionRoute : MPAVRoute {
    MRGroupSessionInfo * _groupSessionInfo;
}

@property (nonatomic, retain) MRGroupSessionInfo *groupSessionInfo;

- (void).cxx_destruct;
- (id)groupSessionInfo;
- (id)initWithActiveSession:(id)arg1;
- (bool)isPhoneRoute;
- (bool)isPickable;
- (bool)isPicked;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setGroupSessionInfo:(id)arg1;

@end
