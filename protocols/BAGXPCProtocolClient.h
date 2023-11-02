
@protocol BAGXPCProtocolClient <NSObject>

@required

- (void)resourceUpdated:(id <BAGResource>)arg1 forOptions:(BAGResourceOptions *)arg2 withContext:(BAGResourceUpdateContext *)arg3;

@end
