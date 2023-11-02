
@interface NEFilterPacketProvider : NEFilterProvider {
    id /* block */  _packetHandler;
}

@property (copy) id /* block */ packetHandler;

- (void).cxx_destruct;
- (void)allowPacket:(id)arg1;
- (id)delayCurrentPacket:(id)arg1;
- (id /* block */)packetHandler;
- (void)setPacketHandler:(id /* block */)arg1;

@end
