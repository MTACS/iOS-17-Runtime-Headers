
@interface HMSoftwareUpdateProgressEvent : HMEEvent {
    HMSoftwareUpdateProgress * _progress;
}

@property (readonly) HMSoftwareUpdateProgress *progress;

- (void).cxx_destruct;
- (id)encodedData;
- (id)initWithProgress:(id)arg1 eventSource:(id)arg2 eventTimestamp:(double)arg3;
- (id)progress;

@end
