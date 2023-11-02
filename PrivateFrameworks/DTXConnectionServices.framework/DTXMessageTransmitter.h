
@interface DTXMessageTransmitter : NSObject {
    unsigned int  _suggestedFragmentSize;
}

@property unsigned int suggestedFragmentSize;

- (unsigned int)fragmentsForLength:(unsigned long long)arg1;
- (void)setSuggestedFragmentSize:(unsigned int)arg1;
- (unsigned int)suggestedFragmentSize;
- (void)transmitMessage:(id)arg1 routingInfo:(struct DTXMessageRoutingInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4 : 1; unsigned int x5 : 31; })arg2 fragment:(unsigned int)arg3 transmitter:(id /* block */)arg4;

@end
