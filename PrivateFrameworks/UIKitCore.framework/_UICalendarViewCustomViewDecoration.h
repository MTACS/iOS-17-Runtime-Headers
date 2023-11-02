
@interface _UICalendarViewCustomViewDecoration : _UICalendarViewDecorationItem {
    id /* block */  _customViewProvider;
    UIView * _fulfilledCustomView;
}

- (void).cxx_destruct;
- (id)_decorationViewForReuseView:(id)arg1;
- (id)initWithCustomViewProvider:(id /* block */)arg1;

@end
