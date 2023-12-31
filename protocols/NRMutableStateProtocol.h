
@protocol NRMutableStateProtocol <NSObject, NSSecureCoding, NSCopying, NRMutableStateObserverProtocol, NRMutableStateParentProtocol>

@required

+ (<NRDiffProtocol> *)diffFrom:(id <NRMutableStateProtocol>)arg1 to:(id <NRMutableStateProtocol>)arg2;

- (<NRDiffProtocol> *)applyDiff:(id <NRDiffProtocol>)arg1;
- (<NRDiffProtocol> *)applyDiff:(id <NRDiffProtocol>)arg1 upOnly:(bool)arg2 notifyParent:(bool)arg3 unconditional:(bool)arg4;

@end
