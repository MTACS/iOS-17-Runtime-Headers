
@protocol VCIDSStreamIDGenerator <NSObject>

@required

- (unsigned short)generateIDSStreamID;
- (unsigned int)generateSSRC;
- (struct tagVCNetworkStreamIdentifiers { unsigned int x1; unsigned short x2; unsigned short x3; })generateSSRC:(bool)arg1 streamID:(bool)arg2 repairStreamID:(bool)arg3;

@end
