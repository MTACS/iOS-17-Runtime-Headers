
@interface _HDHealthServiceWriteOperation : NSObject {
    HDHealthServiceCharacteristic * _characteristic;
    id /* block */  _completion;
    bool  _expectResponse;
}

- (void).cxx_destruct;

@end
