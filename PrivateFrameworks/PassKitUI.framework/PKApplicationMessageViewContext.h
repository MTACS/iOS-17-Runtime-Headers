
@interface PKApplicationMessageViewContext : NSObject {
    PKApplicationMessageNode * _node;
    unsigned long long  _numberOfAdditionalSubviews;
    bool  _userExpanded;
    PKApplicationMessageView * _view;
}

- (id)init;

@end
