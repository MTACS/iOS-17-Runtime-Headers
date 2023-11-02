
@interface WFNetworkSettingsCellFactory : NSObject {
    UITableView * _tableView;
}

@property (retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_registerCells;
- (id)autoJoinCellAtIndexPath:(id)arg1;
- (id)autoLoginCellAtIndexPath:(id)arg1;
- (id)credentialsViewerCellAtIndexPath:(id)arg1 credentails:(id)arg2 hideCredentials:(bool)arg3 isPassword:(bool)arg4;
- (id)dhcpClientIDCellAtIndexPath:(id)arg1;
- (id)dhcpClientIDTextCellAtIndexPath:(id)arg1;
- (id)dnsConfigureCellAtIndexPath:(id)arg1;
- (id)dnsSearchDomainsCellAtIndexPath:(id)arg1;
- (id)dnsServerAddressesCellAtIndexPath:(id)arg1;
- (id)forgetCellAtIndexPath:(id)arg1;
- (id)httpProxyConfigCellAtIndexPath:(id)arg1;
- (id)httpProxyPasswordTextCellAtIndexPath:(id)arg1;
- (id)httpProxyPortTextCellAtIndexPath:(id)arg1;
- (id)httpProxyServerTextCellAtIndexPath:(id)arg1;
- (id)httpProxyURLTextCellAtIndexPath:(id)arg1;
- (id)httpProxyUserTextCellAtIndexPath:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (id)ipv4AddressCellAtIndexPath:(id)arg1;
- (id)ipv4AddressConfigCellAtIndexPath:(id)arg1;
- (id)ipv4AddressTextCellAtIndexPath:(id)arg1;
- (id)ipv4RouterCellAtIndexPath:(id)arg1;
- (id)ipv4RouterTextCellAtIndexPath:(id)arg1;
- (id)ipv4SubnetMaskCellAtIndexPath:(id)arg1;
- (id)ipv4SubnetMaskTextCellAtIndexPath:(id)arg1;
- (id)ipv6AddressCellAtIndexPath:(id)arg1;
- (id)ipv6AddressConfigCellAtIndexPath:(id)arg1;
- (id)ipv6RouterCellAtIndexPath:(id)arg1;
- (id)joinCellAtIndexPath:(id)arg1;
- (id)manageCellAtIndexPath:(id)arg1;
- (id)networkQualityCellAtIndexPath:(id)arg1;
- (id)outrankedCellAtIndexPath:(id)arg1 chinaDevice:(bool)arg2;
- (id)priorityCellAtIndexPath:(id)arg1;
- (id)privacyProxyEnabledCellAtIndexPath:(id)arg1;
- (id)randomMACCellAtIndexPath:(id)arg1 shouldShowSwitch:(bool)arg2 chinaDevice:(bool)arg3;
- (id)recommendationCellAtIndexPath:(id)arg1;
- (id)renewLeaseCellAtIndexPath:(id)arg1;
- (id)saveDataModeCellAtIndexPath:(id)arg1;
- (id)segmentedCellAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)wifiModeCellAtIndexPath:(id)arg1;

@end
