
@interface CLLocationGroup : NSObject {
    ECEFCoordinate * _centerECEF;
    GeographicCoordinate * _centerLatLon;
    NSString * _groupId;
    long long  _locationContext;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _locationIds;
    double  _tolerance;
    struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { 
        struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<unsigned long>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _wifiOnlyDownloadLocIdxs;
    struct unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>>>> { 
        struct __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>>>> { 
            void *__value_; 
        } __ptr_; 
    }  vertices;
}

@property (readonly) ECEFCoordinate *centerECEF;
@property (readonly) GeographicCoordinate *centerLatLon;
@property (readonly) NSString *groupId;
@property (readonly) long long locationContext;
@property (readonly) /* Warning: unhandled struct encoding: '{vector<std::string' */ struct  locationIds; /* unknown property attribute:  std::allocator<std::string>>=^v}} */
@property (readonly) double tolerance;
@property /* Warning: unhandled struct encoding: '{set<unsigned long' */ struct  wifiOnlyDownloadLocIdxs; /* unknown property attribute:  std::less<unsigned long>>=Q}}} */

+ (void)storeAverage:(id)arg1 ofVertices:(id)arg2;
+ (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })stringVectorFromNSArray:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allowCellularDownload:(unsigned long long)arg1;
- (id)centerECEF;
- (id)centerLatLon;
- (double)distance:(id)arg1;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })getGroupId;
- (const void*)getLocationIds;
- (const void*)getVertices;
- (id)groupId;
- (id)init;
- (id)initWithGroupId:(id)arg1 locationIds:(id)arg2 center:(id)arg3 wifiOnlyDownloadLocIdxs:(const void*)arg4 locationContext:(long long)arg5 andTolerance:(double)arg6;
- (long long)locationContext;
- (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })locationIds;
- (void)setWifiOnlyDownloadLocIdxs:(struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1;
- (double)tolerance;
- (struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::less<unsigned long>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })wifiOnlyDownloadLocIdxs;

@end
