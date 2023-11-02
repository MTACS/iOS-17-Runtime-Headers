
@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject {
    NSArray * _characteristicWriteRequests;
    HMDMediaPlaybackAction * _residualAction;
}

@property (readonly) NSArray *characteristicWriteRequests;
@property (readonly) HMDMediaPlaybackAction *residualAction;

- (void).cxx_destruct;
- (id)characteristicWriteRequests;
- (id)init;
- (id)initWithAction:(id)arg1 characteristicWriteRequests:(id)arg2;
- (id)residualAction;

@end
