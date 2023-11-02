
@interface SANewThreadInfo : NSObject {
    int  _newPid;
    unsigned long long  _newTid;
    int  _oldPid;
    SATimestamp * _timestamp;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
