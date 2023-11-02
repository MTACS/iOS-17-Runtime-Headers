
@protocol SFCollaborationItemChangeObserver <NSObject>

@required

- (void)observable:(id <SFCollaborationItem>)arg1 didChange:(unsigned long long)arg2;

@end
