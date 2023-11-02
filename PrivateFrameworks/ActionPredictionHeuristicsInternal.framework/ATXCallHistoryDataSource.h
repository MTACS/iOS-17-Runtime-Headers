
@interface ATXCallHistoryDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (id)_dictForCall:(id)arg1;
- (id)_dictForHandle:(id)arg1;
- (void)callNewerThan:(double)arg1 showIncoming:(bool)arg2 showOutgoing:(bool)arg3 missedOnly:(bool)arg4 callback:(id /* block */)arg5;
- (id)initWithDevice:(id)arg1;

@end
