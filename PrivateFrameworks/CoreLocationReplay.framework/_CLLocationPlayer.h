
@interface _CLLocationPlayer : NSObject {
    bool  _arSessionActive;
    bool  _fusionEnabled;
    struct CLVisionLocationFuser { 
        bool activated_; 
        struct SpinLock { 
            struct atomic_flag { 
                struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                    _Atomic bool __a_value; 
                } __a_; 
            } flag_; 
        } visionLock_; 
        struct vector<clv::fusion::VioData, std::allocator<clv::fusion::VioData>> { 
            struct VioData {} *__begin_; 
            struct VioData {} *__end_; 
            struct __compressed_pair<clv::fusion::VioData *, std::allocator<clv::fusion::VioData>> { 
                struct VioData {} *__value_; 
            } __end_cap_; 
        } vioBuffer_; 
        struct vector<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::VlfData>>> { 
                void *__value_; 
            } __end_cap_; 
        } vlfBuffer_; 
        struct vector<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData> *, std::allocator<clv::fusion::LocationFuserMeasurement<clv::fusion::LocData>>> { 
                void *__value_; 
            } __end_cap_; 
        } locBuffer_; 
        struct LocationFuserState { 
            bool initByFrames; 
            bool initByPoints; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } transform_vio2enu; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_camark2enu; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_lla; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_vio; 
            struct LocData { 
                int type; 
                struct CLVisionTime { 
                    double cf_abs; 
                    double mach_abs; 
                    double mach_cont; 
                } t; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_lla; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_ecef; 
                double p_horz_acc; 
                double p_vert_acc; 
                double course_enu; 
                double course_enu_acc; 
                double speed; 
                double speed_acc; 
                bool is_p_enu_valid; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_origin_lla; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_enu; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_enu_cov; 
                bool is_course_enu_from_pos_valid; 
                double course_enu_from_pos; 
                double course_enu_from_pos_cov; 
            } location; 
            int status; 
            bool is_heading_fused; 
            double heading_enu; 
            double heading_enu_acc; 
            struct LocationFuserMeasurement<clv::fusion::LocData> { 
                struct LocData { 
                    int type; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_lla; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_ecef; 
                    double p_horz_acc; 
                    double p_vert_acc; 
                    double course_enu; 
                    double course_enu_acc; 
                    double speed; 
                    double speed_acc; 
                    bool is_p_enu_valid; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_origin_lla; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_enu; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_enu_cov; 
                    bool is_course_enu_from_pos_valid; 
                    double course_enu_from_pos; 
                    double course_enu_from_pos_cov; 
                } loc; 
                struct VioData { 
                    int tracking_state; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t_origin; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t; 
                    struct DevicePose { 
                        bool is_deterministic_; 
                        struct QuaternionT<double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } q_; 
                        struct MatrixMxNT<3UL, 3UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 9UL> { 
                                double __elems_[9]; 
                            } data_; 
                            struct bitset<9UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } R_; 
                        struct MatrixMxNT<4UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } r_; 
                        struct MatrixMxNT<3UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 3UL> { 
                                double __elems_[3]; 
                            } data_; 
                            struct bitset<3UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } p_; 
                        struct MatrixMxNT<6UL, 6UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 36UL> { 
                                double __elems_[36]; 
                            } data_; 
                            struct bitset<36UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } cov_; 
                    } pose_camark2vio; 
                    struct DevicePose { 
                        bool is_deterministic_; 
                        struct QuaternionT<double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } q_; 
                        struct MatrixMxNT<3UL, 3UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 9UL> { 
                                double __elems_[9]; 
                            } data_; 
                            struct bitset<9UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } R_; 
                        struct MatrixMxNT<4UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } r_; 
                        struct MatrixMxNT<3UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 3UL> { 
                                double __elems_[3]; 
                            } data_; 
                            struct bitset<3UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } p_; 
                        struct MatrixMxNT<6UL, 6UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 36UL> { 
                                double __elems_[36]; 
                            } data_; 
                            struct bitset<36UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } cov_; 
                    } transform_camark2imu; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } v_vio; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } v_vio_cov; 
                    bool is_delta_p_vio_valid; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } delta_p_vio; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } delta_p_vio_cov; 
                    double delta_p_vio_time_interval; 
                    bool is_course_vio_valid; 
                    double course_vio; 
                    double course_vio_cov; 
                    bool is_synced; 
                } vio; 
            } locMeas; 
        } initState_; 
        struct LocationFuserState { 
            bool initByFrames; 
            bool initByPoints; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } transform_vio2enu; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_camark2enu; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_lla; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_vio; 
            struct LocData { 
                int type; 
                struct CLVisionTime { 
                    double cf_abs; 
                    double mach_abs; 
                    double mach_cont; 
                } t; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_lla; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_ecef; 
                double p_horz_acc; 
                double p_vert_acc; 
                double course_enu; 
                double course_enu_acc; 
                double speed; 
                double speed_acc; 
                bool is_p_enu_valid; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_origin_lla; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_enu; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_enu_cov; 
                bool is_course_enu_from_pos_valid; 
                double course_enu_from_pos; 
                double course_enu_from_pos_cov; 
            } location; 
            int status; 
            bool is_heading_fused; 
            double heading_enu; 
            double heading_enu_acc; 
            struct LocationFuserMeasurement<clv::fusion::LocData> { 
                struct LocData { 
                    int type; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_lla; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_ecef; 
                    double p_horz_acc; 
                    double p_vert_acc; 
                    double course_enu; 
                    double course_enu_acc; 
                    double speed; 
                    double speed_acc; 
                    bool is_p_enu_valid; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_origin_lla; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_enu; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_enu_cov; 
                    bool is_course_enu_from_pos_valid; 
                    double course_enu_from_pos; 
                    double course_enu_from_pos_cov; 
                } loc; 
                struct VioData { 
                    int tracking_state; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t_origin; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t; 
                    struct DevicePose { 
                        bool is_deterministic_; 
                        struct QuaternionT<double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } q_; 
                        struct MatrixMxNT<3UL, 3UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 9UL> { 
                                double __elems_[9]; 
                            } data_; 
                            struct bitset<9UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } R_; 
                        struct MatrixMxNT<4UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } r_; 
                        struct MatrixMxNT<3UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 3UL> { 
                                double __elems_[3]; 
                            } data_; 
                            struct bitset<3UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } p_; 
                        struct MatrixMxNT<6UL, 6UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 36UL> { 
                                double __elems_[36]; 
                            } data_; 
                            struct bitset<36UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } cov_; 
                    } pose_camark2vio; 
                    struct DevicePose { 
                        bool is_deterministic_; 
                        struct QuaternionT<double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } q_; 
                        struct MatrixMxNT<3UL, 3UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 9UL> { 
                                double __elems_[9]; 
                            } data_; 
                            struct bitset<9UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } R_; 
                        struct MatrixMxNT<4UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } r_; 
                        struct MatrixMxNT<3UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 3UL> { 
                                double __elems_[3]; 
                            } data_; 
                            struct bitset<3UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } p_; 
                        struct MatrixMxNT<6UL, 6UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 36UL> { 
                                double __elems_[36]; 
                            } data_; 
                            struct bitset<36UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } cov_; 
                    } transform_camark2imu; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } v_vio; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } v_vio_cov; 
                    bool is_delta_p_vio_valid; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } delta_p_vio; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } delta_p_vio_cov; 
                    double delta_p_vio_time_interval; 
                    bool is_course_vio_valid; 
                    double course_vio; 
                    double course_vio_cov; 
                    bool is_synced; 
                } vio; 
            } locMeas; 
        } lastState_; 
        struct vector<clv::fusion::LocationFuserState, std::allocator<clv::fusion::LocationFuserState>> { 
            struct LocationFuserState {} *__begin_; 
            struct LocationFuserState {} *__end_; 
            struct __compressed_pair<clv::fusion::LocationFuserState *, std::allocator<clv::fusion::LocationFuserState>> { 
                struct LocationFuserState {} *__value_; 
            } __end_cap_; 
        } prevStates_; 
        struct LocationFuserState { 
            bool initByFrames; 
            bool initByPoints; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } transform_vio2enu; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_camark2enu; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_lla; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_vio; 
            struct LocData { 
                int type; 
                struct CLVisionTime { 
                    double cf_abs; 
                    double mach_abs; 
                    double mach_cont; 
                } t; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_lla; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_ecef; 
                double p_horz_acc; 
                double p_vert_acc; 
                double course_enu; 
                double course_enu_acc; 
                double speed; 
                double speed_acc; 
                bool is_p_enu_valid; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_origin_lla; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_enu; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_enu_cov; 
                bool is_course_enu_from_pos_valid; 
                double course_enu_from_pos; 
                double course_enu_from_pos_cov; 
            } location; 
            int status; 
            bool is_heading_fused; 
            double heading_enu; 
            double heading_enu_acc; 
            struct LocationFuserMeasurement<clv::fusion::LocData> { 
                struct LocData { 
                    int type; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_lla; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_ecef; 
                    double p_horz_acc; 
                    double p_vert_acc; 
                    double course_enu; 
                    double course_enu_acc; 
                    double speed; 
                    double speed_acc; 
                    bool is_p_enu_valid; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_origin_lla; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_enu; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } p_enu_cov; 
                    bool is_course_enu_from_pos_valid; 
                    double course_enu_from_pos; 
                    double course_enu_from_pos_cov; 
                } loc; 
                struct VioData { 
                    int tracking_state; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t_origin; 
                    struct CLVisionTime { 
                        double cf_abs; 
                        double mach_abs; 
                        double mach_cont; 
                    } t; 
                    struct DevicePose { 
                        bool is_deterministic_; 
                        struct QuaternionT<double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } q_; 
                        struct MatrixMxNT<3UL, 3UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 9UL> { 
                                double __elems_[9]; 
                            } data_; 
                            struct bitset<9UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } R_; 
                        struct MatrixMxNT<4UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } r_; 
                        struct MatrixMxNT<3UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 3UL> { 
                                double __elems_[3]; 
                            } data_; 
                            struct bitset<3UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } p_; 
                        struct MatrixMxNT<6UL, 6UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 36UL> { 
                                double __elems_[36]; 
                            } data_; 
                            struct bitset<36UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } cov_; 
                    } pose_camark2vio; 
                    struct DevicePose { 
                        bool is_deterministic_; 
                        struct QuaternionT<double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } q_; 
                        struct MatrixMxNT<3UL, 3UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 9UL> { 
                                double __elems_[9]; 
                            } data_; 
                            struct bitset<9UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } R_; 
                        struct MatrixMxNT<4UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 4UL> { 
                                double __elems_[4]; 
                            } data_; 
                            struct bitset<4UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } r_; 
                        struct MatrixMxNT<3UL, 1UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 3UL> { 
                                double __elems_[3]; 
                            } data_; 
                            struct bitset<3UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } p_; 
                        struct MatrixMxNT<6UL, 6UL, double> { 
                            int (**_vptr$MatrixMxNT)(); 
                            struct array<double, 36UL> { 
                                double __elems_[36]; 
                            } data_; 
                            struct bitset<36UL> { 
                                unsigned long long __first_; 
                            } visited_; 
                        } cov_; 
                    } transform_camark2imu; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } v_vio; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } v_vio_cov; 
                    bool is_delta_p_vio_valid; 
                    struct MatrixMxNT<3UL, 1UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 3UL> { 
                            double __elems_[3]; 
                        } data_; 
                        struct bitset<3UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } delta_p_vio; 
                    struct MatrixMxNT<3UL, 3UL, double> { 
                        int (**_vptr$MatrixMxNT)(); 
                        struct array<double, 9UL> { 
                            double __elems_[9]; 
                        } data_; 
                        struct bitset<9UL> { 
                            unsigned long long __first_; 
                        } visited_; 
                    } delta_p_vio_cov; 
                    double delta_p_vio_time_interval; 
                    bool is_course_vio_valid; 
                    double course_vio; 
                    double course_vio_cov; 
                    bool is_synced; 
                } vio; 
            } locMeas; 
        } currState_; 
        struct VioData { 
            int tracking_state; 
            struct CLVisionTime { 
                double cf_abs; 
                double mach_abs; 
                double mach_cont; 
            } t_origin; 
            struct CLVisionTime { 
                double cf_abs; 
                double mach_abs; 
                double mach_cont; 
            } t; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_camark2vio; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } transform_camark2imu; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } v_vio; 
            struct MatrixMxNT<3UL, 3UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 9UL> { 
                    double __elems_[9]; 
                } data_; 
                struct bitset<9UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } v_vio_cov; 
            bool is_delta_p_vio_valid; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } delta_p_vio; 
            struct MatrixMxNT<3UL, 3UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 9UL> { 
                    double __elems_[9]; 
                } data_; 
                struct bitset<9UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } delta_p_vio_cov; 
            double delta_p_vio_time_interval; 
            bool is_course_vio_valid; 
            double course_vio; 
            double course_vio_cov; 
            bool is_synced; 
        } lastValidVio_; 
        struct VlfData { 
            struct CLVisionTime { 
                double cf_abs; 
                double mach_abs; 
                double mach_cont; 
            } t; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_cam3dv2ecef; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_camark2ecef; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_lla; 
            double confidence; 
            bool is_p_enu_valid; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_lla; 
            struct DevicePose { 
                bool is_deterministic_; 
                struct QuaternionT<double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } q_; 
                struct MatrixMxNT<3UL, 3UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 9UL> { 
                        double __elems_[9]; 
                    } data_; 
                    struct bitset<9UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } R_; 
                struct MatrixMxNT<4UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 4UL> { 
                        double __elems_[4]; 
                    } data_; 
                    struct bitset<4UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } r_; 
                struct MatrixMxNT<3UL, 1UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 3UL> { 
                        double __elems_[3]; 
                    } data_; 
                    struct bitset<3UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } p_; 
                struct MatrixMxNT<6UL, 6UL, double> { 
                    int (**_vptr$MatrixMxNT)(); 
                    struct array<double, 36UL> { 
                        double __elems_[36]; 
                    } data_; 
                    struct bitset<36UL> { 
                        unsigned long long __first_; 
                    } visited_; 
                } cov_; 
            } pose_camark2enu; 
        } lastValidVlf_; 
        struct LocData { 
            int type; 
            struct CLVisionTime { 
                double cf_abs; 
                double mach_abs; 
                double mach_cont; 
            } t; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_lla; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_ecef; 
            double p_horz_acc; 
            double p_vert_acc; 
            double course_enu; 
            double course_enu_acc; 
            double speed; 
            double speed_acc; 
            bool is_p_enu_valid; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_origin_lla; 
            struct MatrixMxNT<3UL, 1UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 3UL> { 
                    double __elems_[3]; 
                } data_; 
                struct bitset<3UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_enu; 
            struct MatrixMxNT<3UL, 3UL, double> { 
                int (**_vptr$MatrixMxNT)(); 
                struct array<double, 9UL> { 
                    double __elems_[9]; 
                } data_; 
                struct bitset<9UL> { 
                    unsigned long long __first_; 
                } visited_; 
            } p_enu_cov; 
            bool is_course_enu_from_pos_valid; 
            double course_enu_from_pos; 
            double course_enu_from_pos_cov; 
        } lastValidLoc_; 
        unsigned long long numReceivedVlf_; 
    }  _locationFuser;
    bool  _notifierActive;
    double  _notifierLastARKitUpdateTime;
    bool  _playerActive;
    bool  _simulationEnabled;
    CLSimulationManager * _simulationManager;
}

@property (getter=isARSessionActive, nonatomic) bool arSessionActive;
@property (getter=isFusionEnabled, nonatomic) bool fusionEnabled;
@property (getter=isNotifierActive, nonatomic) bool notifierActive;
@property (nonatomic) double notifierLastARKitUpdateTime;
@property (getter=isPlayerActive, nonatomic) bool playerActive;
@property (getter=isSimulationEnabled, nonatomic) bool simulationEnabled;
@property (nonatomic, retain) CLSimulationManager *simulationManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_getFusedLocationFrom:(id)arg1 machAbsTime:(double)arg2;
- (void)_updateARSessionState:(unsigned long long)arg1;
- (void)_updateLocation:(struct CLDaemonLocation { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; }*)arg1 locationPrivate:(void*)arg2;
- (void)_updateVIOEstimation:(id)arg1;
- (void)_updateVLLocalizationResult:(id)arg1;
- (void)closeARSessionWithState:(unsigned long long)arg1;
- (void)convertCLLocation:(id)arg1 machAbsTime:(double)arg2 toDaemonLocation:(struct CLDaemonLocation { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; int x20; double x21; bool x22; }*)arg3 daemonLocationPrivate:(void*)arg4;
- (void)dealloc;
- (bool)hasARSessionTimedOut:(double)arg1;
- (id)init;
- (bool)isARSessionActive;
- (bool)isFusionEnabled;
- (bool)isNotifierActive;
- (bool)isPlayerActive;
- (bool)isSimulationEnabled;
- (double)notifierLastARKitUpdateTime;
- (void)setArSessionActive:(bool)arg1;
- (void)setEnableFusion:(bool)arg1;
- (void)setEnableSimulation:(bool)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setNotifierActive:(bool)arg1;
- (void)setNotifierLastARKitUpdateTime:(double)arg1;
- (void)setPlayerActive:(bool)arg1;
- (void)setSimulationEnabled:(bool)arg1;
- (void)setSimulationManager:(id)arg1;
- (id)simulationManager;
- (void)start;
- (void)startARSessionWithState:(unsigned long long)arg1;
- (void)stop;

@end
