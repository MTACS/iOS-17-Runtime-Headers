
@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage {
    int  _referenceFrameBracketedCaptureSequenceNumber;
}

@property (readonly) int referenceFrameBracketedCaptureSequenceNumber;

+ (id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;

- (int)referenceFrameBracketedCaptureSequenceNumber;

@end
