
@interface SACallTreeStateChildren : SACallTreeNode {
    NSArray * _ioEvents;
    int  _onBehalfOfPid;
    NSArray * _timeRanges;
}

- (void).cxx_destruct;

@end
